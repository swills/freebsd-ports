# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/devel/p5-Proc-Fork/Makefile 478064 2018-08-25 16:01:04Z sunpoet $

PORTNAME=	Proc-Fork
PORTVERSION=	0.806
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Proc::Fork - Simple, intuitive interface to the fork() system call

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Exporter-Tidy>=0:devel/p5-Exporter-Tidy \
		p5-Object-Tiny-Lvalue>=0:devel/p5-Object-Tiny-Lvalue

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
