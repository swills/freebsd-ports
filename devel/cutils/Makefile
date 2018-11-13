# Created by: Sandro Sigala
# $FreeBSD: head/devel/cutils/Makefile 484628 2018-11-10 18:12:57Z bapt $

PORTNAME=	cutils
PORTVERSION=	1.6
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://www.sigala.it/sandro/files/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Miscellaneous C programmer's utilities

USES=		makeinfo
GNU_CONFIGURE=	yes
MAKE_ENV=	MAKEINFO="${MAKEINFO}"
INFO=		cutils
MAKE_JOBS_UNSAFE=	yes

CONFLICTS=	cdecl-[0-9]*

.include <bsd.port.mk>
