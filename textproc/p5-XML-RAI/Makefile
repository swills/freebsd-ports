# Created by: arved
# $FreeBSD: head/textproc/p5-XML-RAI/Makefile 435927 2017-03-11 15:59:22Z sunpoet $

PORTNAME=	XML-RAI
PORTVERSION=	1.3031
PORTEPOCH=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	RSS Abstraction Interface

LICENSE=	ART10

BUILD_DEPENDS=	p5-XML-RSS-Parser>=0:textproc/p5-XML-RSS-Parser \
		p5-TimeDate>=0:devel/p5-TimeDate
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
