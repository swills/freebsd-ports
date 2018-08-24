# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/devel/p5-Proc-Fork/Makefile 477763 2018-08-22 02:12:53Z wen $

PORTNAME=	Proc-Fork
PORTVERSION=	0.805
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Proc::Fork - Simple, intuitive interface to the fork() system call

BUILD_DEPENDS=	p5-Exporter-Tidy>=0:devel/p5-Exporter-Tidy \
		p5-Object-Tiny-Lvalue>=0:devel/p5-Object-Tiny-Lvalue
RUN_DEPENDS=	p5-Exporter-Tidy>=0:devel/p5-Exporter-Tidy \
		p5-Object-Tiny-Lvalue>=0:devel/p5-Object-Tiny-Lvalue

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
