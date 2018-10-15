# Created by: Wen Heping<wen@FreeBSD.org>
# $FreeBSD: head/textproc/p5-Pod-Autopod/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Pod-Autopod
PORTVERSION=	1.215
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generates pod documentation by analysing perl modules

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Pod-Abstract>=0:textproc/p5-Pod-Abstract

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
