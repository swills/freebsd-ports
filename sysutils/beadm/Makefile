# $FreeBSD: head/sysutils/beadm/Makefile 473643 2018-06-30 21:11:19Z bdrewery $

PORTNAME=	beadm
PORTVERSION=	1.2.8
PORTREVISION=	0
CATEGORIES=	sysutils
MASTER_SITES=	GH \
		http://mirror.shatow.net/freebsd/${PORTNAME}/ \
		LOCAL/bdrewery/${PORTNAME}

MAINTAINER=	bdrewery@FreeBSD.org
COMMENT=	Solaris-like utility to manage Boot Environments on ZFS

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	vermaden

NO_BUILD=	YES

CONFLICTS_INSTALL=	beadm-devel-*

PLIST_FILES=	sbin/${PORTNAME} \
		man/man1/${PORTNAME}.1.gz

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} \
	    ${STAGEDIR}${PREFIX}/sbin/${PORTNAME}
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 \
	  ${STAGEDIR}${MANPREFIX}/man/man1/

.include <bsd.port.mk>
