# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-commonmarker/Makefile 491195 2019-01-25 19:59:48Z sunpoet $

PORTNAME=	commonmarker
PORTVERSION=	0.18.2
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby wrapper for libcmark (CommonMark parser)

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-ruby-enum>=0.5:devel/rubygem-ruby-enum

USES=		gem
USE_RUBY=	yes

PLIST_FILES=	bin/commonmarker

.include <bsd.port.mk>
