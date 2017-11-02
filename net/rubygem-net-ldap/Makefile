# Created by: Jyun-Yan You <jyyou@cs.nctu.edu.tw>
# $FreeBSD: head/net/rubygem-net-ldap/Makefile 453372 2017-11-02 19:02:06Z sunpoet $

PORTNAME=	net-ldap
PORTVERSION=	0.16.1
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
