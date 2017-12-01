# Created by: Tor Halvard "Squat" Furulund <squat@squat.no>
# $FreeBSD: head/net-mgmt/tcptrack/Makefile 455265 2017-12-01 11:14:32Z amdmi3 $

PORTNAME=	tcptrack
PORTVERSION=	1.4.2
PORTREVISION=	3
CATEGORIES=	net-mgmt
MASTER_SITES=	http://BSDforge.com/projects/source/net-mgmt/tcptrack/ \
		http://pkgs.fedoraproject.org/repo/pkgs/tcptrack/tcptrack-1.4.2.tar.gz/dacf71a6b5310caf1203a2171b598610/

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Packet sniffer that displays TCP information like top(1)

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		ncurses
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/tcptrack man/man1/tcptrack.1.gz

.include <bsd.port.mk>
