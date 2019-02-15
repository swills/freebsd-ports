# $FreeBSD: head/security/rubygem-metasploit-payloads/Makefile 492613 2019-02-10 14:35:43Z antoine $

PORTNAME=	metasploit-payloads
PORTVERSION=	1.3.61
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Compiled binaries for Metasploit's Meterpreter

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
NO_ARCH_IGNORE=	libndkstager.so
STRIP=
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
