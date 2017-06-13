# Created by: Daniel Roethlisberger <daniel@roe.ch>
# $FreeBSD: head/devel/rubygem-grit/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	grit
PORTVERSION=	2.5.0
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Object-oriented ruby library to access git repositories

LICENSE=	MIT

RUN_DEPENDS=	rubygem-diff-lcs>=1.1:textproc/rubygem-diff-lcs \
		rubygem-mime-types1>=1.15:misc/rubygem-mime-types1 \
		rubygem-posix-spawn>=0.3.6:devel/rubygem-posix-spawn

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
