# Deployment Guide

## Web Deployment (Vercel)

### Prerequisites
- Vercel account
- GitHub repository

### Steps

1. **Connect Repository**
```bash
vercel link
```

2. **Configure Environment Variables**
```bash
vercel env add OPENAI_API_KEY
vercel env add SUPABASE_URL
vercel env add STRIPE_SECRET_KEY
```

3. **Deploy**
```bash
vercel --prod
```

### Custom Domain
```bash
vercel domains add yourdomain.com
```

## Mobile Deployment

### iOS (App Store)

1. **Setup EAS**
```bash
cd apps/mobile
eas build:configure
```

2. **Build**
```bash
eas build --platform ios --profile production
```

3. **Submit**
```bash
eas submit --platform ios
```

### Android (Google Play)

1. **Build**
```bash
eas build --platform android --profile production
```

2. **Submit**
```bash
eas submit --platform android
```

## Environment Variables

### Required
```env
NEXT_PUBLIC_SUPABASE_URL=
NEXT_PUBLIC_SUPABASE_ANON_KEY=
OPENAI_API_KEY=
STRIPE_SECRET_KEY=
```

### Optional
```env
ANTHROPIC_API_KEY=
REPLICATE_API_TOKEN=
ELEVENLABS_API_KEY=
DEEPGRAM_API_KEY=
SENTRY_DSN=
NEXT_PUBLIC_POSTHOG_KEY=
```

## Database Setup

### Supabase

1. **Create Project**
- Go to supabase.com
- Create new project

2. **Run Migrations**
```bash
pnpm db:migrate
```

3. **Setup RLS Policies**
```sql
-- Enable RLS
ALTER TABLE users ENABLE ROW LEVEL SECURITY;

-- Policy: Users can read own data
CREATE POLICY "Users can read own data"
  ON users FOR SELECT
  USING (auth.uid() = id);
```

## CI/CD Pipeline

### GitHub Actions

```yaml
name: Deploy
on:
  push:
    branches: [main]

jobs:
  deploy:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v3
      - uses: pnpm/action-setup@v2
      - run: pnpm install
      - run: pnpm build
      - run: pnpm test
      - uses: amondnet/vercel-action@v20
```

## Monitoring

### Sentry (Error Tracking)
```typescript
import * as Sentry from '@sentry/nextjs';

Sentry.init({
  dsn: process.env.SENTRY_DSN,
  environment: process.env.NODE_ENV,
});
```

### PostHog (Analytics)
```typescript
import posthog from 'posthog-js';

posthog.init(process.env.NEXT_PUBLIC_POSTHOG_KEY, {
  api_host: '