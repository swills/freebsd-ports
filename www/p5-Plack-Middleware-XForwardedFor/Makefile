# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/www/p5-Plack-Middleware-XForwardedFor/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Plack-Middleware-XForwardedFor
PORTVERSION=	0.172050
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Plack middleware to handle X-Forwarded-For headers

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Net-IP>=1.26:net-mgmt/p5-Net-IP \
		p5-Plack>=0.9913:www/p5-Plack
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
