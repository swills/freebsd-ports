# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: head/devel/php70-intl/Makefile 479680 2018-09-13 17:11:20Z joneum $

CATEGORIES=	devel

MASTERDIR=	${.CURDIR}/../../lang/php70

PKGNAMESUFFIX=	-intl

USES=		compiler:c++11-lib
USE_CXXSTD=	gnu++11

CPPFLAGS+=	-DU_USING_ICU_NAMESPACE=1

.include "${MASTERDIR}/Makefile"
