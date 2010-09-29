/**
 * PrimaryVertex
 * s8 
 *
 * Created by Samvel Khalatian on Sep 28, 2010
 * Copyright 2010, All rights reserved
 */

#ifndef S8_PRIMARY_VERTEX
#define S8_PRIMARY_VERTEX

#include <TVector3.h>

namespace s8
{
    class PrimaryVertex
    {
        public:
            PrimaryVertex() throw();

            TVector3 &vertex();
            const TVector3 &vertex() const;

            int ndof() const;
            double rho() const;



            void setNdof(const int &);
            void setRho(const double &);

        private:
            TVector3 _vertex;

            int      _ndof;
            double   _rho;
    };

    inline PrimaryVertex::PrimaryVertex() throw()
    {
    }

    inline TVector3 &PrimaryVertex::vertex()
    {
        return _vertex;
    }

    inline const TVector3 &PrimaryVertex::vertex() const
    {
        return _vertex;
    }

    inline int PrimaryVertex::ndof() const
    {
        return _ndof;
    }

    inline double PrimaryVertex::rho() const
    {
        return _rho;
    }



    inline  void PrimaryVertex::setRho(const double &rho)
    {
        _rho = rho;
    }
}

#endif
