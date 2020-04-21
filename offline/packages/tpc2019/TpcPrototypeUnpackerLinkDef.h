#include<vector>
#include<map>

#ifdef __CINT__

#pragma link C++ class TpcPrototypeUnpacker-!;
#pragma link C++ class TpcPrototypeUnpacker::ChannelHeader +;
#pragma link C++ class TpcPrototypeUnpacker::EventHeader +;
#pragma link C++ class TpcPrototypeUnpacker::ClusterData +;

#pragma link C++ class std::vector < int >  +;
#pragma link C++ class std::vector < std::vector < double > > +;

#pragma link C++ class std::map < int, std::vector < double > > +;

#else
template class std::vector< int >;
template class std::vector < std::vector < double > >;
template class std::map < int, std::vector < double > >;

#endif /* __CINT__ */
