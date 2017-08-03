#ifndef __KOKKOSBATCHED_LU_DECL_HPP__
#define __KOKKOSBATCHED_LU_DECL_HPP__


/// \author Kyungjoo Kim (kyukim@sandia.gov)


namespace KokkosBatched {
  namespace Experimental {
      
    namespace Serial {
      template<typename ArgAlgo>
      struct LU {
	// no piv version
	template<typename AViewType>
	KOKKOS_INLINE_FUNCTION
	static int
	invoke(const AViewType &A);
      };       
    }

    namespace Team {
      template<typename MemberType,
	       typename ArgAlgo>
      struct LU {
	// no piv version
	template<typename AViewType>
	KOKKOS_INLINE_FUNCTION
	static int
	invoke(const MemberType &member, 
	       const AViewType &A);
      };       
    }
      
  }
}

#endif