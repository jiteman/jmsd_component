#pragma once


#include "jmsd_c_base/jmsd_c_base_class.h"


#include "jmsd_c_derived.h"


namespace jmsd {
namespace tpc_derived {


class JMSD_C_DERIVED_LIBRARY_TEMPLATE_SHARED_INTERFACE Tpc_derived_class :
	public c_base::C_base_class
{

public:
	// virtuals Tpc_base_class
	//~virtuals Tpc_base_class

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
public:
	char const *say_derived_hello() const noexcept;

// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
public:
	// virtual Tpc_base_class
	~Tpc_derived_class() noexcept override = default;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
public:
	Tpc_derived_class() noexcept = default;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
private:
	Tpc_derived_class( const Tpc_derived_class &another ) noexcept = delete;
	Tpc_derived_class &operator =( const Tpc_derived_class &another ) noexcept = delete;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
private:
	Tpc_derived_class( Tpc_derived_class &&another ) noexcept = delete;
	Tpc_derived_class &operator =( Tpc_derived_class &&another ) noexcept = delete;

// # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
private:

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
private:

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
private:

};


} // namespace dlt
} // namespace jmsd
