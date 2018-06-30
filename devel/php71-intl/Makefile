# $FreeBSD: head/devel/php71-intl/Makefile 473551 2018-06-29 14:22:11Z jbeich $

PORTREVISION=	1
CATEGORIES=	devel

MASTERDIR=	${.CURDIR}/../../lang/php71

PKGNAMESUFFIX=	-intl

USES=		compiler:c++11-lib
USE_CXXSTD=	gnu++11

CPPFLAGS+=	-DU_USING_ICU_NAMESPACE=1

.include "${MASTERDIR}/Makefile"
