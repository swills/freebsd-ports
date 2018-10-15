# Created by: chinsan
# $FreeBSD: head/devel/p5-Event-ExecFlow/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Event-ExecFlow
PORTVERSION=	0.64
PORTREVISION=	1
CATEGORIES=	devel net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	API for complex flow controls with asynchronous execution of external programs

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-AnyEvent>=0:devel/p5-AnyEvent \
		p5-Locale-libintl>=0:devel/p5-Locale-libintl

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
