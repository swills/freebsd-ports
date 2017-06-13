# Created by: Jyun-Yan You <jyyou@cs.nctu.edu.tw>
# $FreeBSD: head/net/rubygem-net-ldap/Makefile 438735 2017-04-17 16:50:32Z miwi $

PORTNAME=	net-ldap
PORTVERSION=	0.16.0
PORTREVISION=	1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Pure Ruby LDAP support library with most client features

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/License.rdoc

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	script/generate-fixture-ca \
		script/changelog

.include <bsd.port.mk>
