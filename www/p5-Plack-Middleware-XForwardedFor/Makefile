# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/www/p5-Plack-Middleware-XForwardedFor/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	Plack-Middleware-XForwardedFor
PORTVERSION=	0.103060
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Plack middleware to handle X-Forwarded-For headers

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Net-Netmask>=1.9015:net-mgmt/p5-Net-Netmask \
		p5-Plack>=0.9913:www/p5-Plack \
		p5-Regexp-Common>=2010010201:textproc/p5-Regexp-Common
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
