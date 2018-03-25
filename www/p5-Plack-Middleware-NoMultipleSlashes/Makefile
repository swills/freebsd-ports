# $FreeBSD: head/www/p5-Plack-Middleware-NoMultipleSlashes/Makefile 465366 2018-03-23 16:33:11Z swills $

PORTNAME=	Plack-Middleware-NoMultipleSlashes
PORTVERSION=	0.001
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Automatically remove multiple slashes in your paths

LICENSE=	GPLv1
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Plack>=0:www/p5-Plack
RUN_DEPENDS=	p5-Plack>=0:www/p5-Plack

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
