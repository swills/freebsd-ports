# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/net/rubygem-aws-s3/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	aws-s3
PORTVERSION=	0.6.3
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Client library for Amazon S3 REST API

RUN_DEPENDS=	rubygem-xml-simple>=0:textproc/rubygem-xml-simple \
		rubygem-builder>=0:devel/rubygem-builder \
		rubygem-mime-types>=0:misc/rubygem-mime-types

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem
PLIST_FILES=	bin/s3sh

.include <bsd.port.mk>
