# $FreeBSD: head/devel/gperf/Makefile 431162 2017-01-11 08:37:08Z dinoex $

PORTNAME=	gperf
PORTVERSION=	3.0.3
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	GNU

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Generates perfect hash functions for sets of keywords

LICENSE=	GPLv2

CONFLICTS=	ace+tao-[0-9]*
MAKE_JOBS_UNSAFE=	yes
# avoid GPLv3 in generated code
PORTSCOUT=	ignore

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--docdir=${DOCSDIR}
INFO=		gperf

regression-test: test

test:	build
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} check

.include <bsd.port.mk>
