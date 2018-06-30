# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD: head/science/getdp/Makefile 473116 2018-06-23 08:27:13Z tcberner $

PORTNAME=	getdp
PORTVERSION=	2.11.3
PORTREVISION=	1
CATEGORIES=	science
MASTER_SITES=	http://www.geuz.org/getdp/src/
DISTNAME=	${PORTNAME}-${PORTVERSION}-source

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Rather general finite element solver using mixed finite elements

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libgsl.so:math/gsl	\
		liblapack.so:math/lapack

USES=		fortran tar:tgz cmake

OPTIONS_DEFINE=	DOCS EXAMPLES

do-test:
	cd ${WRKSRC}/demos && yes "" | ${STAGEDIR}${PREFIX}/bin/${PORTNAME} magnet.pro -solve MagSta_phi

.include <bsd.port.mk>
