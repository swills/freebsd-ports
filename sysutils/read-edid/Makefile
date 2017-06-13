# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/sysutils/read-edid/Makefile 420524 2016-08-20 18:43:29Z danfe $

PORTNAME=	read-edid
PORTVERSION=	3.0.2
CATEGORIES=	sysutils
MASTER_SITES=	http://www.polypux.org/projects/${PORTNAME}/

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Tools for reading the EDID from a monitor

LIB_DEPENDS=	libx86.so:devel/libx86

USES=		cmake localbase

PLIST_FILES=	bin/get-edid bin/parse-edid man/man1/get-edid.1.gz
PORTDOCS=	AUTHORS ChangeLog LICENSE README

.include <bsd.port.mk>
