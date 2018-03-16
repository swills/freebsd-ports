# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD: head/science/getdp/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	getdp
PORTVERSION=	2.11.2
PORTREVISION=	3
CATEGORIES=	science
MASTER_SITES=	http://www.geuz.org/getdp/src/
DISTNAME=	${PORTNAME}-${PORTVERSION}-source

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Rather general finite element solver using mixed finite elements

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/README.txt

LIB_DEPENDS=	libgsl.so:math/gsl	\
		liblapack.so:math/lapack

USES=		fortran tar:tgz cmake
WANT_PERL=	yes

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.pre.mk>

.if defined(MAINTAINER_MODE)
regression-test:	install
	cd ${WRKSRC}/demos && yes "" | ${PORTNAME} magnet.pro -solve MagSta_phi
.endif

.include <bsd.port.post.mk>
