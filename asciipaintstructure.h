#ifndef ASCIIPAINTSTRUCTURE_H
#define ASCIIPAINTSTRUCTURE_H

#define verMajor 1
#define verMinor 2
#define verPatch 0
#define verDevPr 3
#define testType "Beta 3"
#define build 627

class asciiPaintStructure
{
    public:
        void asciiPaintInfo();
        void paintMenu();
        void getHelp();
        void info();
        void exit();
        void saveMode();
        void settings(int clearScreenMode);
        void loadFile();

        //void paintStructure();

    protected:

    private:
};

#endif // ASCIIPAINTSTRUCTURE_H
