# Created by: Mathieu Arnold <mat@FreeBSD.org>
# $FreeBSD: head/www/p5-Mojolicious-Plugin-Authentication/Makefile 468024 2018-04-22 12:50:35Z sunpoet $

PORTNAME=	Mojolicious-Plugin-Authentication
PORTVERSION=	1.33
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Mojolicious plugin to make authentication a bit easier

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Mojolicious>=0:www/p5-Mojolicious
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
