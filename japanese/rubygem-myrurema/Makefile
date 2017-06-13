# Created by: Shin-ya MURAKAMI <murashin@gfd-dennou.org>
# $FreeBSD: head/japanese/rubygem-myrurema/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	myrurema
PORTVERSION=	0.3.5
CATEGORIES=	japanese rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Tool which helps searching/browsing/writing the Japanese Ruby docs

RUN_DEPENDS=	rubygem-launchy>=2.3:devel/rubygem-launchy

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/rurema

.include <bsd.port.pre.mk>

PKGNAMEPREFIX:=	${PKGNAMEPREFIX}rubygem-

.include <bsd.port.post.mk>
