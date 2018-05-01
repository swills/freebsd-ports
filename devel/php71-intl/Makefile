# $FreeBSD: head/devel/php71-intl/Makefile 468353 2018-04-26 14:49:18Z tz $

CATEGORIES=	devel

MASTERDIR=	${.CURDIR}/../../lang/php71

PKGNAMESUFFIX=	-intl

USES=		compiler:c++11-lib
USE_CXXSTD=	gnu++11

CPPFLAGS+=	-DU_USING_ICU_NAMESPACE=1

.include "${MASTERDIR}/Makefile"
