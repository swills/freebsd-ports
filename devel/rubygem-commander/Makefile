# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-commander/Makefile 476270 2018-08-02 23:43:22Z sunpoet $

PORTNAME=	commander
PORTVERSION=	4.4.6
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Complete solution for Ruby command-line executables

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-highline>=1.7.2:devel/rubygem-highline

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/commander

.include <bsd.port.mk>
