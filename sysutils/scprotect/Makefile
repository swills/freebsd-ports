# Created by: Denis Barov  <dindin@dindin.ru>
# $FreeBSD: head/sysutils/scprotect/Makefile 474998 2018-07-20 09:29:59Z 0mp $

PORTNAME=	scprotect
PORTVERSION=	20091116
CATEGORIES=	sysutils
MASTER_SITES=	http://dindin.ru/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Protect process from killing when the swap space is exhausted

BROKEN_FreeBSD_11=	does not build on FreeBSD 11.x+
BROKEN_FreeBSD_12=	does not build on FreeBSD 11.x+: scprotect.c: 'sysctl__' undeclared (first use in this function)

USES=		kmod uidfix

WRKSRC=		${WRKDIR}/${PORTNAME}

CFLAGS+=	-DWITH_SCPROTECT_LIST

post-extract:
	@cd ${WRKSRC}/kmod && ${RM} machine

post-install:
	@${RM} -r ${STAGEDIR}/usr/lib/debug

.include <bsd.port.mk>
