# Created by: Chris Calvey <chris@securityforensics.co.uk>
# $FreeBSD: head/sysutils/aimage/Makefile 436247 2017-03-15 14:45:30Z mat $

PORTNAME=	aimage
PORTVERSION=	3.2.5
CATEGORIES=	sysutils
MASTER_SITES=	http://digitalcorpora.org/downloads/

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Advanced Disk Imager

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libafflib.so:sysutils/afflib

USES=		gmake ssl
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/aimage

.include <bsd.port.mk>
