# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/www/p5-Jemplate/Makefile 439328 2017-04-24 15:21:24Z sunpoet $

PORTNAME=	Jemplate
PORTVERSION=	0.300
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:INGY
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C|0$||}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	JavaScript Templating with Template Toolkit

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-File-Find-Rule>=0.33:devel/p5-File-Find-Rule \
		p5-Template-Toolkit>=2.25:www/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
