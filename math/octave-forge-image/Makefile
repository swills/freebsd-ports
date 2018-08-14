# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: head/math/octave-forge-image/Makefile 476952 2018-08-12 02:57:03Z stephen $

PORTNAME=	octave-forge-image
PORTVERSION=	2.8.0
PORTREVISION=	2
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	Many
LICENSE_NAME=	Many different licenses
LICENSE_FILE=	${WRKDIR}/${OCTSRC}/COPYING
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${DISTNAME}

WRKSRC=		${WRKDIR}/${OCTSRC}/src

USES=		compiler:c++14-lang
GNU_CONFIGURE=	yes
CXXFLAGS+=	-fPIC

.include "${.CURDIR}/../../Mk/bsd.octave.mk"

post-build:
	${RM} ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.mk>
