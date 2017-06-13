# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: head/math/octave-forge-communications/Makefile 437439 2017-04-01 15:23:30Z gerald $

PORTNAME=	octave-forge-communications
PORTVERSION=	1.2.1
PORTREVISION=	3
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	GPLv3
LICENSE_FILE=	${WRKDIR}/${OCTSRC}/COPYING

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${DISTNAME}

GNU_CONFIGURE=	yes

WRKSRC=		${WRKDIR}/${OCTSRC}/src
MAKE_ENV+=	MKOCTFILE=mkoctfile

RUN_DEPENDS+=	${TARBALLS_DIR}/signal.tar.gz:math/octave-forge-signal

.include "${.CURDIR}/../../Mk/bsd.octave.mk"

post-build:
	${RM} ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.mk>
