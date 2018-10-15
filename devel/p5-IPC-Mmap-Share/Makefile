# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/p5-IPC-Mmap-Share/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	IPC-Mmap-Share
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Safely share structures among processes using anonymous mmap

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IPC-Mmap>=0:devel/p5-IPC-Mmap

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
