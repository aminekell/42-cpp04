#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0 ; i < 4 ; i++)
        tmplate[i] = NULL;
}
MateriaSource::~MateriaSource()
{
    for(int i = 0 ; i < 4 ; i++)
    {
        delete tmplate[i];
        tmplate[i] = NULL;
    }
}
MateriaSource::MateriaSource(const MateriaSource  &src)
{
    for(int j = 0 ; j < 4 ; j++)
        tmplate[j] = NULL;
    for(int i = 0 ; i < 4 ; i++)
    {
        if(src.tmplate[i])
            tmplate[i] = src.tmplate[i]->clone();
    }
}
MateriaSource &MateriaSource::operator=(const MateriaSource  &src)
{
    if(this != &src)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            delete tmplate[j];
            tmplate[j] = NULL;
        }
        for(int i = 0 ; i < 4 ; i++)
        {
            if(src.tmplate[i])
                tmplate[i] = src.tmplate[i]->clone();
        }
        }
    return *this;
}
void MateriaSource::learnMateria(AMateria *m)
{
if(!m)
    return ;
for (int i = 0; i < 4 ; i++)
{
    if(!this->tmplate[i])
    {
        tmplate[i] = m->clone();
        delete m;
        return;
    }
}
delete m;
}

 AMateria* MateriaSource::createMateria(std::string const & type)
 {
        for(int i = 0; i < 4 ; i++)
        {
            if(this->tmplate[i] && tmplate[i]->getType() == type)
                return tmplate[i]->clone();
        }
        return 0;
 }