# $FreeBSD: head/net/rubygem-omniauth-kerberos/Makefile 455591 2017-12-05 16:44:09Z tz $

PORTNAME=	omniauth-kerberos
PORTVERSION=	0.3.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	idefix@fechner.net
COMMENT=	OmniAuth strategy for Kerberos

LICENSE=	MIT

RUN_DEPENDS=	rubygem-omniauth-multipassword>0:security/rubygem-omniauth-multipassword \
		rubygem-timfel-krb5-auth>=0.8:security/rubygem-timfel-krb5

USES=		gem
NO_ARCH=	yes
USE_RUBY=	yes

.include <bsd.port.mk>
