# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: head/textproc/p5-Text-Aligner/Makefile 413597 2016-04-18 17:28:55Z sunpoet $

PORTNAME=	Text-Aligner
PORTVERSION=	0.13
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Align text in columns

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Term-ANSIColor>=2.02:devel/p5-Term-ANSIColor
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
