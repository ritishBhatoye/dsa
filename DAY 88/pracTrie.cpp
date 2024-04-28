#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class Trie{

    public:
    TrieNode* root;

    Trie(){
        root=new TrieNode('\0');
    }
    void insertUtil(TrieNode* root,string word)
    {
        if(word.length()==0)
        {
            root->isTerminal=true;
            return;
        }
        int index=word[0]-'A';
        TrieNode* child;

        //present
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        //absent
        else
        {
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        insertUtil(child,word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode* root,string word){
        if(word.length()==0){
            return root->isTerminal;
        }
        int index=word[0] - 'A';
        TrieNode* child;

        if(root->children[index]!=NULL){
            child=root->children[index];
        }

        else{
            return false;
        }
        return searchUtil(child,word.substr(1));
    }
    bool searchWord(string word){
        return searchUtil(root,word);
    }

    bool isEmpty(TrieNode* root){
        for(int i=0;i<26;i++){
            if(root->children[i])
                return false;
        return true;
        }
    }

   TrieNode* remove(TrieNode* root,string word,int depth=0){
    if(!root){
        return NULL;
    }
    if(depth==word.size()){
        if(root->isTerminal)
        {
            root->isTerminal=false;
        }
        
        if(isEmpty(root))
        {
            delete (root);
            root=NULL;
        }

        return root;

    }
    int index=word[depth] -'A';

    root->children[index]= remove(root->children[index], word, depth + 1);
   if(isEmpty(root) && root->isTerminal==false){
    delete (root);
    root=NULL;
   }
return root;
   }

};



int main()
{

    Trie *t=new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    cout<<endl<<endl;
    string enter;
    cin>>enter;
    cout<<endl<<endl;

    t->remove(t->root,enter);

    cout<<endl<<endl;
    if(t->searchWord(enter)==1){
        cout<<"WORD "<<enter<<" IS PRESENT "<<endl;
    }
    else{
        cout<<"WORD "<<enter<<" IS NOT PRESENT "<<endl;
    }
    cout<<endl<<endl;

    return 0;

}