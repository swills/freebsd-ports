# Created by: tj@FreeBSD.org
# $FreeBSD: head/textproc/p5-Text-CSV-Hashify/Makefile 484556 2018-11-09 23:27:38Z sunpoet $

PORTNAME=	Text-CSV-Hashify
PORTVERSION=	0.11
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Composition and decomposition of comma-separated values into hashes

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_ART10=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Text-CSV>=0:textproc/p5-Text-CSV

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
