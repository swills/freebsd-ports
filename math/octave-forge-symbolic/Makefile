# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: head/math/octave-forge-symbolic/Makefile 443931 2017-06-20 03:33:47Z stephen $

PORTNAME=	octave-forge-symbolic
PORTVERSION=	2.5.0
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	GPLv3
LICENSE_FILE=	${WRKDIR}/${OCTSRC}/COPYING

BUILD_DEPENDS+=	isympy:math/py-sympy
RUN_DEPENDS+=	isympy:math/py-sympy

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${DISTNAME}

WRKSRC=		${WRKDIR}/${OCTSRC}/src

.include "${.CURDIR}/../../Mk/bsd.octave.mk"

do-build:
	${DO_NADA}

post-build:
	${RM} ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.mk>
