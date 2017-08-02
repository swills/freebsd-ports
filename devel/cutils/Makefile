# Created by: Sandro Sigala
# $FreeBSD: head/devel/cutils/Makefile 446854 2017-07-28 21:45:20Z jkim $

PORTNAME=	cutils
PORTVERSION=	1.6
CATEGORIES=	devel
MASTER_SITES=	http://www.sigala.it/sandro/files/

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Miscellaneous C programmer's utilities

USES=		makeinfo
GNU_CONFIGURE=	yes
MAKE_ENV=	MAKEINFO="${MAKEINFO}"
INFO=		cutils
MAKE_JOBS_UNSAFE=	yes

CONFLICTS=	cdecl-[0-9]*

.include <bsd.port.mk>
