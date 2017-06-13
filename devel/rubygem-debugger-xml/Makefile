# Created by: Vladimir Kondratiev <wulf@mail.mipt.ru>
# $FreeBSD: head/devel/rubygem-debugger-xml/Makefile 433374 2017-02-05 05:32:36Z sunpoet $

PORTNAME=	debugger-xml
PORTVERSION=	0.4.1
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	XML interface for rubygem-debugger

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-builder>=2.0.0:devel/rubygem-builder \
		rubygem-byebug>=0:devel/rubygem-byebug

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/rdebug-ide bin/rdebug-vim

.include <bsd.port.mk>
