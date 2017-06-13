# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/textproc/p5-Sphinx-Manager/Makefile 425555 2016-11-06 16:50:51Z sunpoet $

PORTNAME=	Sphinx-Manager
PORTVERSION=	0.08
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Sphinx search engine management (start/stop)

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-Path-Class>=0:devel/p5-Path-Class \
		p5-Proc-ProcessTable>=0:devel/p5-Proc-ProcessTable \
		p5-Sphinx-Config>=0.09:textproc/p5-Sphinx-Config
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
