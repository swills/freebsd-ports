# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: head/math/octave-forge-geometry/Makefile 443922 2017-06-20 01:18:24Z stephen $

PORTNAME=	octave-forge-geometry
PORTVERSION=	3.0.0
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	GPLv3
LICENSE_FILE=	${WRKDIR}/${OCTSRC}/COPYING

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${DISTNAME}

WRKSRC=		${WRKDIR}/${OCTSRC}/src

RUN_DEPENDS+=	py*-lxml>=0:devel/py-lxml

.include "${.CURDIR}/../../Mk/bsd.octave.mk"

post-build:
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.mk>
