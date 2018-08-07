# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-rspec-mocks/Makefile 476545 2018-08-06 19:54:27Z sunpoet $

PORTNAME=	rspec-mocks
PORTVERSION=	3.8.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Rspec-mocks provides a test-double framework for rspec

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-diff-lcs>=1.2.0:textproc/rubygem-diff-lcs \
		rubygem-rspec-support>=${PORTVERSION:R}.0:devel/rubygem-rspec-support

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
