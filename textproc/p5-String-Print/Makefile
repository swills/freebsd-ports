# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/textproc/p5-String-Print/Makefile 443643 2017-06-15 21:51:04Z sunpoet $

PORTNAME=	String-Print
PORTVERSION=	0.90
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Alternative of printf

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-Unicode-LineBreak>=0:textproc/p5-Unicode-LineBreak
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
