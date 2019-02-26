# Created by: Quentin Stievenart <acieroid@awesom.eu>
# $FreeBSD: head/devel/cpuflags/Makefile 493762 2019-02-24 14:06:10Z tobik $

PORTNAME=	cpuflags
PORTVERSION=	1.41
CATEGORIES=	devel sysutils
MASTER_SITES=	http://awesom.eu/~acieroid/files/ports/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Determine compiler flags to best target current cpu

DEPRECATED=	does not recognize modern CPUs; use -march=native instead
EXPIRATION_DATE=	2019-03-03

post-install:
	${REINPLACE_CMD} -i '' -e "s,@@SH@@,${SH:Q}," ${STAGEDIR}${PREFIX}/bin/cpuflags

.include <bsd.port.mk>
