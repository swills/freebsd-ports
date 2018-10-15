# Created by: Timur Bakeyev <bat@cpan.org>
# $FreeBSD: head/converters/p5-Unicode-Stringprep/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Unicode-Stringprep
PORTVERSION=	1.105
PORTREVISION=	1
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Preparation of Internationalized Strings (RFC 3454)

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Unicode-Normalize>=1:textproc/p5-Unicode-Normalize
TEST_DEPENDS=	p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings \
		p5-Test-Pod>=1:devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:devel/p5-Test-Pod-Coverage

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
