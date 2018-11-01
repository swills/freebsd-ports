# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/textproc/p5-Lingua-EN-Fathom/Makefile 483720 2018-11-01 19:15:28Z sunpoet $

PORTNAME=	Lingua-EN-Fathom
PORTVERSION=	1.19
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Measure readability of English text

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Lingua-EN-Syllable>=0:textproc/p5-Lingua-EN-Syllable

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
